@interface AWEShareTrackerService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackChannelClick:context:;
+ (void)trackShareSuccess:;
+ (void)trackShareAfterDownload:;
+ (void)trackShareAfterLink:;
+ (id)commonTrackParameters:;
@end
