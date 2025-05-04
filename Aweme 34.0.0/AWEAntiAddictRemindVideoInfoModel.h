@interface AWEAntiAddictRemindVideoInfoModel : MTLModel
@property (nonatomic) NSString aid;
@property (nonatomic) NSString primaryTitle;
@property (nonatomic) NSString secondaryTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEmptyModel;
- (id)secondaryTitle;
- (void).cxx_destruct;
- (void)setPrimaryTitle:;
- (void)setSecondaryTitle:;
- (id)primaryTitle;
- (id)aid;
- (void)setAid:;
+ (id)instanceWithAid:primaryTitle:secondaryTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
