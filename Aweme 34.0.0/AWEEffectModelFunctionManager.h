@interface AWEEffectModelFunctionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)titleActionWithTitle:;
+ (void)setEffectCoverWithEffectID:itemID:isDelete:completion:;
+ (id)removeEffectCoverConfirmSheetViewWithConfirmBlock:;
+ (void)requestEffectToTop:needTop:completion:;
+ (void)requestEffectToHide:needHide:completion:;
@end
