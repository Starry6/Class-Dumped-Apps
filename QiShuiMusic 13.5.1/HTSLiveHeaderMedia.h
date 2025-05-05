@interface HTSLiveHeaderMedia : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) HTSLiveImage imageInfo;
@property (nonatomic) BOOL hasImageInfo;
@property (nonatomic) HTSLiveHeaderMedia_ViewButton viewButton;
@property (nonatomic) BOOL hasViewButton;
+ (id)descriptor;
@end
