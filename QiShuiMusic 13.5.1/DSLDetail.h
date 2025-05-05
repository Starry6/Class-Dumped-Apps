@interface DSLDetail : IESLivePBBaseMessage
@property (nonatomic) q dslId;
@property (nonatomic) q dslType;
@property (nonatomic) NSString dslGeckoDownloadUri;
@property (nonatomic) NSString dslSliceInfo;
@property (nonatomic) q version;
@property (nonatomic) NSString dslData;
@property (nonatomic) DSLDetail_ExtraInfo extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
