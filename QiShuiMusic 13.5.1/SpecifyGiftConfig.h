@interface SpecifyGiftConfig : IESLivePBBaseMessage
@property (nonatomic) NSString mixSetUid;
@property (nonatomic) GPBInt64Array giftIdsArray;
@property (nonatomic) Q giftIdsArray_Count;
@property (nonatomic) GPBInt64ObjectDictionary giftMap;
@property (nonatomic) Q giftMap_Count;
@property (nonatomic) NSString setOpenUid;
@property (nonatomic) NSString des;
- (id)mixSetUid;
- (void)setMixSetUid:;
+ (id)descriptor;
@end
