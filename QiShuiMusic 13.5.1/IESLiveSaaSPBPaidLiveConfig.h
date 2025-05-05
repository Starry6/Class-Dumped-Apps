@interface IESLiveSaaSPBPaidLiveConfig : GPBMessage
@property (nonatomic) q spuId;
@property (nonatomic) NSString spuIdStr;
@property (nonatomic) q skuId;
@property (nonatomic) NSString skuIdStr;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) IESLiveSaaSPBImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) NSInteger sellStatus;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray iosPayPriceInfoArray;
@property (nonatomic) Q iosPayPriceInfoArray_Count;
@property (nonatomic) NSMutableArray androidPayPriceInfoArray;
@property (nonatomic) Q androidPayPriceInfoArray_Count;
@property (nonatomic) IESLiveSaaSPBPaidLiveConfig_UserRight userRight;
@property (nonatomic) BOOL hasUserRight;
+ (id)descriptor;
@end
