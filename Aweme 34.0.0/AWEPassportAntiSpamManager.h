@interface AWEPassportAntiSpamManager : NSObject
@property (nonatomic) <AWEPassportAntiSpamDelegate> implementation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)processMiddleCheckWithURL:originalParams:error:rawData:completion:;
- (void)setupWithImplementation:;
- (id)implementation;
- (void)setImplementation:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
