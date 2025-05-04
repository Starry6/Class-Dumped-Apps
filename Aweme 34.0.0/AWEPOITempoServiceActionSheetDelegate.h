@interface AWEPOITempoServiceActionSheetDelegate : NSObject
@property (nonatomic) @? completeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionSheet:didClickButtonAtIndex:;
- (void)actionSheetDidClickCancelButton:;
- (void)actionSheetDidClickMaskArea:;
- (void)setCompleteBlock:;
- (id)completeBlock;
- (void).cxx_destruct;
@end
