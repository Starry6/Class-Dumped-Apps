@interface StampInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString id_p;
@property (nonatomic) NSString title;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString webURL;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString description_p;
@property (nonatomic) HTSLiveImage thumbnail;
@property (nonatomic) BOOL hasThumbnail;
@property (nonatomic) StampInfoExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
