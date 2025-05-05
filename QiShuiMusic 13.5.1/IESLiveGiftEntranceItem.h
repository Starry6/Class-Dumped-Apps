@interface IESLiveGiftEntranceItem : HTSLiveGiftItem
- (BOOL)canCombo;
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (BOOL)canGroup;
- (BOOL)canSelect;
+ (id)itemFromModel:attachingDIContext:;
@end
