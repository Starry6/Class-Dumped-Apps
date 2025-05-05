@interface LPCaptionRowPresentationProperties : NSObject
@property (nonatomic) BOOL hasAnyContent;
@property (nonatomic) LPCaptionPresentationProperties leading;
@property (nonatomic) LPCaptionPresentationProperties trailing;
@property (nonatomic) LPCaptionButtonPresentationProperties button;
- (id)init;
- (id)left;
- (id)button;
- (void).cxx_destruct;
- (id)right;
- (id)trailing;
- (void)setButton:;
- (id)leading;
- (BOOL)hasAnyContent;
- (void)applyToAllCaptions:;
@end
