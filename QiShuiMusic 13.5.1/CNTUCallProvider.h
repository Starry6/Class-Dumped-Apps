@interface CNTUCallProvider : NSObject
@property (nonatomic) TUCallProvider callProvider;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) BOOL supportsAudio;
@property (nonatomic) BOOL supportsVideo;
@property (nonatomic) NSSet supportedHandleTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleIdentifier;
- (BOOL)supportsVideo;
- (id)localizedName;
- (void).cxx_destruct;
- (id)supportedHandleTypes;
- (id)callProvider;
- (void)setCallProvider:;
- (BOOL)supportsAudio;
- (id)dialRequestForHandle:contact:video:;
- (id)initWithCallProvider:;
@end
