@interface PaintingContextProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnableFlush:;
- (void)finishLayoutOperation;
- (void)forceFlush;
- (id)initWithPaintingContext:;
- (BOOL)isLayoutFinish;
- (void)resetLayoutStatus;
- (void)updateExtraData:value:;
- (void)updateLayout:layoutLeft:top:width:height:;
@end
