@interface AWEPIDislikePanelHelper : NSObject
+ (id)placeHolderString;
+ (BOOL)enableKeywordType;
+ (long long)maxLimitCountForInput;
+ (BOOL)isInputViewModel:;
+ (BOOL)enableInputViewType;
+ (BOOL)enableVoiceOverType;
+ (id)experimentDic;
+ (void)updateEntityInfo:extraContent:;
+ (id)addInputViewDimension:;
+ (id)inputViewDimension;
+ (id)itemSize;
+ (id)headerSize;
+ (id)titleSize;
@end
