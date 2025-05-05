@interface IESLiveLinkmicCanvasLayoutCustom : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)buildLayout;
- (id)containerRect;
- (BOOL)isMainSlotEnable;
- (BOOL)isMainSlotWithIndex:;
- (id)separatorLayoutFrames;
- (id)sessionLayoutFrames;
- (id)sessionLayoutInset;
- (id)streamLayoutProvider;
@end
