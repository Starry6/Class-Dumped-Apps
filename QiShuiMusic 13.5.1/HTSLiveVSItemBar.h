@interface HTSLiveVSItemBar : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage iconDark;
@property (nonatomic) BOOL hasIconDark;
@property (nonatomic) HTSLiveImage iconLight;
@property (nonatomic) BOOL hasIconLight;
@property (nonatomic) NSString title;
@property (nonatomic) NSString seperator;
@property (nonatomic) NSString detail;
@property (nonatomic) q watchInfoPv;
@property (nonatomic) NSString watchInfoHeat;
@property (nonatomic) q collectionId;
@property (nonatomic) NSInteger tabId;
@property (nonatomic) NSString contentType;
+ (id)descriptor;
@end
