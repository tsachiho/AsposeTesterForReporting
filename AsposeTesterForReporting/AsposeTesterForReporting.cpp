// AsposeTesterForReporting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <system/enumerator_adapter.h>
#include <system/console.h>
#include <system/string.h>
#include <system/io/file.h>
#include <system/io/file_mode.h>
#include <system/io/file_stream.h>
#include <system/io/memory_stream.h>

#include <system/uri.h>
#include <system/special_casts.h>
#include <system/convert.h>
#include <system/collections/dictionary.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <drawing/graphics.h>
#include <drawing/bitmap.h>

#include <IFontSources.h>
#include <LoadFormat.h>
#include <PresentationLockingBehavior.h>
#include <LoadingStreamBehavior.h>
#include <ViewType.h>
#include <ISpreadsheetOptions.h>

#include <DOM/Animation/AnimationTimeLine.h>
#include <DOM/Animation/EffectChartMajorGroupingType.h>
#include <DOM/Animation/EffectChartMinorGroupingType.h>
#include <DOM/Animation/EffectPresetClassType.h>
#include <DOM/Animation/EffectSubtype.h>
#include <DOM/Animation/EffectTriggerType.h>
#include <DOM/Animation/EffectType.h>
#include <DOM/Animation/IBehaviorCollection.h>
#include <DOM/Animation/IEffect.h>
#include <DOM/Animation/IMotionPath.h>
#include <DOM/Animation/ISequence.h>
#include <DOM/Animation/ISequenceCollection.h>
#include <DOM/Animation/ITiming.h>
#include <DOM/Animation/MotionCommandPathType.h>
#include <DOM/Animation/MotionEffect.h>
#include <DOM/Animation/MotionPathPointsType.h>
#include <DOM/Animation/Sequence.h>
#include <DOM/AudioPlayModePreset.h>
#include <DOM/AudioVolumeMode.h>
#include <DOM/AutoShape.h>
#include <DOM/AutoShapeLock.h>
#include <DOM/BackgroundType.h>
#include <DOM/BevelPresetType.h>
#include <DOM/BlobManagementOptions.h>
#include <DOM/BulletType.h>
#include <DOM/CameraPresetType.h>
#include <DOM/Chart/AxisAggregationType.h>
#include <DOM/Chart/BubbleSizeRepresentationType.h>
#include <DOM/Chart/CategoryAxisType.h>
#include <DOM/Chart/Chart.h>
#include <DOM/Chart/ChartData.h>
#include <DOM/Chart/ChartTitle.h>
#include <DOM/Chart/ChartType.h>
#include <DOM/Chart/DataSourceType.h>
#include <DOM/Chart/DisplayUnitType.h>
#include <DOM/Chart/ErrorBarType.h>
#include <DOM/Chart/ErrorBarValueType.h>
#include <DOM/Chart/IAxesManager.h>
#include <DOM/Chart/IAxis.h>
#include <DOM/Chart/IChartCategory.h>
#include <DOM/Chart/IChartCategoryCollection.h>
#include <DOM/Chart/IChartCategoryLevelsManager.h>
#include <DOM/Chart/IChartData.h>
#include <DOM/Chart/IChartDataCell.h>
#include <DOM/Chart/IChartDataPoint.h>
#include <DOM/Chart/IChartDataPointCollection.h>
#include <DOM/Chart/IChartDataPointCollection.h>
#include <DOM/Chart/IChartDataPointLevel.h>
#include <DOM/Chart/IChartDataPointLevelsManager.h>
#include <DOM/Chart/IChartDataWorkbook.h>
#include <DOM/Chart/IChartDataWorksheet.h>
#include <DOM/Chart/IChartDataWorksheetCollection.h>
#include <DOM/Chart/IChartLinesFormat.h>
#include <DOM/Chart/IChartPlotArea.h>
#include <DOM/Chart/IChartPortionFormat.h>
#include <DOM/Chart/IChartSeries.h>
#include <DOM/Chart/IChartSeriesCollection.h>
#include <DOM/Chart/IChartSeriesCollection.h>
#include <DOM/Chart/IChartSeriesGroup.h>
#include <DOM/Chart/IChartSeriesGroupCollection.h>
#include <DOM/Chart/IChartTextBlockFormat.h>
#include <DOM/Chart/IChartTextFormat.h>
#include <DOM/Chart/IChartWall.h>
#include <DOM/Chart/IDataLabel.h>
#include <DOM/Chart/IDataLabelCollection.h>
#include <DOM/Chart/IDataLabelFormat.h>
#include <DOM/Chart/IDataSourceTypeForErrorBarsCustomValues.h>
#include <DOM/Chart/IDataTable.h>
#include <DOM/Chart/IDoubleChartValue.h>
#include <DOM/Chart/IErrorBarsCustomValues.h>
#include <DOM/Chart/IErrorBarsFormat.h>
#include <DOM/Chart/IFormat.h>
#include <DOM/Chart/ILegend.h>
#include <DOM/Chart/ILegendEntryCollection.h>
#include <DOM/Chart/ILegendEntryProperties.h>
#include <DOM/Chart/IMarker.h>
#include <DOM/Chart/IRotation3D.h>
#include <DOM/Chart/IStringOrDoubleChartValue.h>
#include <DOM/Chart/ITrendline.h>
#include <DOM/Chart/ITrendlineCollection.h>
#include <DOM/Chart/IUpDownBarsManager.h>
#include <DOM/Chart/LayoutTargetType.h>
#include <DOM/Chart/LegendDataLabelPosition.h>
#include <DOM/Chart/LegendPositionType.h>
#include <DOM/Chart/MarkerStyleType.h>
#include <DOM/Chart/ParentLabelLayoutType.h>
#include <DOM/Chart/PieSplitType.h>
#include <DOM/Chart/QuartileMethodType.h>
#include <DOM/Chart/TickLabelPositionType.h>
#include <DOM/Chart/TimeUnitType.h>
#include <DOM/Chart/TrendlineType.h>
#include <DOM/ColorTransformOperation.h>
#include <DOM/ColorType.h>
#include <DOM/Connector.h>
#include <DOM/DigitalSignature.h>
#include <DOM/DocumentProperties.h>
#include <DOM/Effects/IDuotone.h>
#include <DOM/Effects/IDuotoneEffectiveData.h>
#include <DOM/Effects/IGlow.h>
#include <DOM/Effects/IImageTransformOperationCollection.h>
#include <DOM/Effects/IInnerShadow.h>
#include <DOM/Effects/IOuterShadow.h>
#include <DOM/Effects/IReflection.h>
#include <DOM/FillType.h>
#include <DOM/FillType.h>
#include <DOM/FontAlignment.h>
#include <DOM/FontSubstCondition.h>
#include <DOM/FontSubstitutionInfo.h>
#include <DOM/Fonts/FontData.h>
#include <DOM/Fonts/FontData.h>
#include <DOM/Fonts/FontFallBackRule.h>
#include <DOM/Fonts/FontFallBackRulesCollection.h>
#include <DOM/Fonts/FontSubstRule.h>
#include <DOM/Fonts/FontSubstRuleCollection.h>
#include <DOM/Fonts/FontsLoader.h>
#include <DOM/GeometryPath.h>
#include <DOM/GradientDirection.h>
#include <DOM/GradientFormat.h>
#include <DOM/GradientShape.h>
#include <DOM/GradientStop.h>
#include <DOM/GradientStopCollection.h>
#include <DOM/GroupShape.h>
#include <DOM/Hyperlink.h>
#include <DOM/HyperlinkColorSource.h>
#include <DOM/IAudio.h>
#include <DOM/IAudioFrame.h>
#include <DOM/IAutoShape.h>
#include <DOM/IAutoShapeLock.h>
#include <DOM/IAutoShapeLock.h>
#include <DOM/IBackground.h>
#include <DOM/IBackgroundEffectiveData.h>
#include <DOM/IBaseSlideHeaderFooterManager.h>
#include <DOM/IBulletFormat.h>
#include <DOM/IBulletFormat.h>
#include <DOM/IBulletFormatEffectiveData.h>
#include <DOM/ICamera.h>
#include <DOM/ICameraEffectiveData.h>
#include <DOM/IChart.h>
#include <DOM/IColorFormat.h>
#include <DOM/IColorFormat.h>
#include <DOM/IColorOperation.h>
#include <DOM/IColorOperationCollection.h>
#include <DOM/IColorOperationCollection.h>
#include <DOM/IComment.h>
#include <DOM/ICommentAuthor.h>
#include <DOM/ICommentAuthorCollection.h>
#include <DOM/ICommentCollection.h>
#include <DOM/ICommonSlideViewProperties.h>
#include <DOM/IConnector.h>
#include <DOM/IConnectorLock.h>
#include <DOM/IDigitalSignatureCollection.h>
#include <DOM/IDocumentProperties.h>
#include <DOM/IEffectFormat.h>
#include <DOM/IFillFormat.h>
#include <DOM/IFillFormatEffectiveData.h>
#include <DOM/IFontData.h>
#include <DOM/IFontsManager.h>
#include <DOM/IGlobalLayoutSlideCollection.h>
#include <DOM/IGradientFormat.h>
#include <DOM/IGradientFormatEffectiveData.h>
#include <DOM/IGradientStopCollectionEffectiveData.h>
#include <DOM/IGradientStopEffectiveData.h>
#include <DOM/IGraphicalObject.h>
#include <DOM/IGraphicalObjectLock.h>
#include <DOM/IGroupShape.h>
#include <DOM/IGroupShapeLock.h>
#include <DOM/IHyperlinkManager.h>
#include <DOM/IHyperlinkQueries.h>
#include <DOM/IImageCollection.h>
#include <DOM/ILayoutSlide.h>
#include <DOM/ILightRig.h>
#include <DOM/ILightRigEffectiveData.h>
#include <DOM/ILineFillFormat.h>
#include <DOM/ILineFormat.h>
#include <DOM/IMasterHandoutSlide.h>
#include <DOM/IMasterHandoutSlideHeaderFooterManager.h>
#include <DOM/IMasterHandoutSlideManager.h>
#include <DOM/IMasterLayoutSlideCollection.h>
#include <DOM/IMasterNotesSlide.h>
#include <DOM/IMasterNotesSlideHeaderFooterManager.h>
#include <DOM/IMasterNotesSlideManager.h>
#include <DOM/IMasterSlide.h>
#include <DOM/IMasterSlideCollection.h>
#include <DOM/IMasterSlideHeaderFooterManager.h>
#include <DOM/INormalViewProperties.h>
#include <DOM/INormalViewRestoredProperties.h>
#include <DOM/INotesSlide.h>
#include <DOM/INotesSlideHeaderFooterManager.h>
#include <DOM/INotesSlideManager.h>
#include <DOM/IOleEmbeddedDataInfo.h>
#include <DOM/IOleObjectFrame.h>
#include <DOM/IPPImage.h>
#include <DOM/IParagraph.h>
#include <DOM/IParagraphCollection.h>
#include <DOM/IParagraphFormat.h>
#include <DOM/IParagraphFormat.h>
#include <DOM/IParagraphFormatEffectiveData.h>
#include <DOM/IParagraphFormatEffectiveData.h>
#include <DOM/IPatternFormat.h>
#include <DOM/IPatternFormatEffectiveData.h>
#include <DOM/IPictureFillFormat.h>
#include <DOM/IPictureFrame.h>
#include <DOM/IPictureFrameLock.h>
#include <DOM/IPlaceholder.h>
#include <DOM/IPortion.h>
#include <DOM/IPortionCollection.h>
#include <DOM/IPortionFormat.h>
#include <DOM/IPortionFormatEffectiveData.h>
#include <DOM/IPresentationFactory.h>
#include <DOM/IPresentationHeaderFooterManager.h>
#include <DOM/IPresentationInfo.h>
#include <DOM/IProtectionManager.h>
#include <DOM/ISection.h>
#include <DOM/ISectionCollection.h>
#include <DOM/IShapeBevel.h>
#include <DOM/IShapeBevelEffectiveData.h>
#include <DOM/IShapeCollection.h>
#include <DOM/IShapeFrame.h>
#include <DOM/ISketchFormat.h>
#include <DOM/ISlide.h>
#include <DOM/ISlideCollection.h>
#include <DOM/ISlideHeaderFooterManager.h>
#include <DOM/ISlideShowTransition.h>
#include <DOM/ISlideSize.h>
#include <DOM/ISlidesPicture.h>
#include <DOM/ISvgImage.h>
#include <DOM/ITextFrame.h>
#include <DOM/ITextFrameFormat.h>
#include <DOM/ITextFrameFormatEffectiveData.h>
#include <DOM/ITextStyle.h>
#include <DOM/ITextStyleEffectiveData.h>
#include <DOM/IThreeDFormat.h>
#include <DOM/IThreeDFormat.h>
#include <DOM/IThreeDFormatEffectiveData.h>
#include <DOM/IVideo.h>
#include <DOM/IVideoCollection.h>
#include <DOM/IViewProperties.h>
#include <DOM/IViewProperties.h>
#include <DOM/LightRigPresetType.h>
#include <DOM/LightingDirection.h>
#include <DOM/LineArrowheadLength.h>
#include <DOM/LineArrowheadStyle.h>
#include <DOM/LineDashStyle.h>
#include <DOM/LineDashStyle.h>
#include <DOM/LineJoinStyle.h>
#include <DOM/LineSketchType.h>
#include <DOM/LineStyle.h>
#include <DOM/LineStyle.h>
#include <DOM/LoadOptions.h>
#include <DOM/MaterialPresetType.h>
#include <DOM/MathText/IMathBlock.h>
#include <DOM/MathText/IMathElement.h>
#include <DOM/MathText/IMathFraction.h>
#include <DOM/MathText/IMathParagraph.h>
#include <DOM/MathText/IMathSuperscriptElement.h>
#include <DOM/MathText/MathBar.h>
#include <DOM/MathText/MathBlock.h>
#include <DOM/MathText/MathPortion.h>
#include <DOM/MathText/MathematicalText.h>
#include <DOM/NumberedBulletStyle.h>
#include <DOM/OleObjectFrame.h>
#include <DOM/Paragraph.h>
#include <DOM/PathFillModeType.h>
#include <DOM/PatternStyle.h>
#include <DOM/PictureFillMode.h>
#include <DOM/PlaceholderType.h>
#include <DOM/Portion.h>
#include <DOM/PortionFormat.h>
#include <DOM/Presentation.h>
#include <DOM/PresentationFactory.h>
#include <DOM/PresentationInfo.h>
#include <DOM/PresetColor.h>
#include <DOM/RectangleAlignment.h>
#include <DOM/SchemeColor.h>
#include <DOM/ShapeFrame.h>
#include <DOM/ShapeThumbnailBounds.h>
#include <DOM/ShapeType.h>
#include <DOM/ShapesAlignmentType.h>
#include <DOM/SlideLayoutType.h>
#include <DOM/SlideShowSettings.h>
#include <DOM/SlideShowTransition/IMorphTransition.h>
#include <DOM/SlideShowTransition/OptionalBlackTransition.h>
#include <DOM/SlideShowTransition/TransitionMorphType.h>
#include <DOM/SlideShowTransition/TransitionType.h>
#include <DOM/SlideSizeScaleType.h>
#include <DOM/SlideSizeScaleType.h>
#include <DOM/SlideSizeType.h>
#include <DOM/SlidesRange.h>
#include <DOM/SmartArt/ISmartArt.h>
#include <DOM/SmartArt/ISmartArtNode.h>
#include <DOM/SmartArt/ISmartArtNodeCollection.h>
#include <DOM/SmartArt/ISmartArtShapeCollection.h>
#include <DOM/SmartArt/OrganizationChartLayoutType.h>
#include <DOM/SmartArt/SmartArt.h>
#include <DOM/SmartArt/SmartArtColorType.h>
#include <DOM/SmartArt/SmartArtLayoutType.h>
#include <DOM/SmartArt/SmartArtNode.h>
#include <DOM/SmartArt/SmartArtQuickStyleType.h>
#include <DOM/SmartArt/SmartArtShape.h>
#include <DOM/SplitterBarStateType.h>
#include <DOM/SvgImage.h>
#include <DOM/Table/ICell.h>
#include <DOM/Table/ICellCollection.h>
#include <DOM/Table/ICellFormat.h>
#include <DOM/Table/ICellFormatEffectiveData.h>
#include <DOM/Table/IColumn.h>
#include <DOM/Table/IColumnCollection.h>
#include <DOM/Table/IColumnFormat.h>
#include <DOM/Table/IColumnFormatEffectiveData.h>
#include <DOM/Table/IRow.h>
#include <DOM/Table/IRowCollection.h>
#include <DOM/Table/IRowFormat.h>
#include <DOM/Table/IRowFormatEffectiveData.h>
#include <DOM/Table/ITable.h>
#include <DOM/Table/ITableFormat.h>
#include <DOM/Table/ITableFormatEffectiveData.h>
#include <DOM/Table/Table.h>
#include <DOM/Table/TableFormat.h>
#include <DOM/TextAlignment.h>
#include <DOM/TextAnchorType.h>
#include <DOM/TextAutofitType.h>
#include <DOM/TextAutofitType.h>
#include <DOM/TextHighlightingOptions.h>
#include <DOM/TextShapeType.h>
#include <DOM/TextUnderlineType.h>
#include <DOM/TextVerticalType.h>
#include <DOM/TileFlip.h>
#include <DOM/Vba/IVbaModule.h>
#include <DOM/Vba/IVbaModuleCollection.h>
#include <DOM/Vba/IVbaReferenceCollection.h>
#include <DOM/Vba/VbaProject.h>
#include <DOM/Vba/VbaReferenceOleTypeLib.h>
#include <DOM/VideoFrame.h>
#include <DOM/VideoPlayModePreset.h>
#include <DOM/Zoom/IZoomFrame.h>
#include <Util/ShapeUtil.h>

#include <Import/ExternalResourceResolver.h>
#include <Import/IExternalResourceResolver.h>

#include <Util/SlideUtil.h>
#include <Util/ILicense.h>
#include <Util/License.h>

#include <Ole/OleEmbeddedDataInfo.h>

#include <Export/IHtmlGenerator.h>
#include <Export/EmbedAllFontsHtmlController.h>
#include <Export/PdfTextCompression.h>
#include <Export/PdfCompliance.h>
#include <Export/INotesCommentsLayoutingOptions.h>
#include <Export/SaveFormat.h>
#include <Export/NotesPositions.h>
#include <Export/PdfOptions.h>
#include <Export/PdfAccessPermissions.h>
#include <Export/ImagePixelFormat.h>
#include <Export/TiffOptions.h>
#include <Export/HtmlOptions.h>
#include <Export/EmbedAllFontsHtmlController.h>
#include <Export/ResponsiveHtmlController.h>
#include <Export/HtmlFormatter.h>
#include <Export/SwfOptions.h>
#include <Export/XpsOptions.h>
#include <Export/NotesCommentsLayoutingOptions.h>
#include <Export/CommentsPositions.h>
#include <Export/NotesPositions.h>
#include <Export/EmbedFontCharacters.h>
#include <Export/ISvgShapeFormattingController.h>
#include <Export/SvgShape.h>
#include <Export/SVGOptions.h>
#include <Export/ISvgShapeAndTextFormattingController.h>
#include <Export/ISvgTSpan.h>
#include <Export/RenderingOptions.h>
#include <Export/SlideImageFormat.h>
#include <Export/PptOptions.h>
#include <Export/Xaml/IXamlOutputSaver.h>
#include <Export/Xaml/XamlOptions.h>
#include <Export/GifOptions.h>
#include <Export/Html5Options.h>
#include <Export/FramesStream/PresentationPlayer.h>
#include <Export/FramesStream/PresentationAnimationsGenerator.h>
#include <Export/FramesStream/FrameTickEventArgs.h>

using namespace Aspose;
using namespace Slides;
using namespace Export;

using namespace System;


int main()
{
    auto pres = System::MakeObject<Presentation>(u"InputPresentation.pptx");

    if (pres != nullptr)
    {
        auto masterSlides = pres->get_Masters();
        int mastersCount = masterSlides->get_Count();

        for (int i = 0; i < mastersCount; ++i)
        {
            auto master = masterSlides->idx_get(i);

            if (master != nullptr)
            {
                auto layoutSlides = master->get_LayoutSlides();
                int layoutCount = layoutSlides->get_Count();

                for (int ii = 0; ii < layoutCount; ++ii)
                {
                    auto newSlide = pres->get_Slides()->AddEmptySlide(layoutSlides->idx_get(ii));
                }
            }
        }

        pres->Save(u"OutputPresentation.pptx", Slides::Export::SaveFormat::Pptx);
        pres->Save(u"OutputPresentation.pdf", Slides::Export::SaveFormat::Pdf);

    }
}

