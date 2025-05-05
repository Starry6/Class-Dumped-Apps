@interface PKDrawingPaletteStatisticsEventLogger : NSObject
@property (nonatomic) double lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
@property (nonatomic) double lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)recordHandwritingToolSelected;
- (void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:;
- (void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:;
- (double)lastHandwritingToolUsedOverDrawingAttachmentTimestamp;
- (void)setLastHandwritingToolUsedOverDrawingAttachmentTimestamp:;
- (double)lastInkingToolUsedOverNonDrawingAttachmentTimestamp;
- (void)setLastInkingToolUsedOverNonDrawingAttachmentTimestamp:;
@end
