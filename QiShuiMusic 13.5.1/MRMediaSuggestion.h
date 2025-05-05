@interface MRMediaSuggestion : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString artist;
@property (nonatomic) MRArtwork artwork;
- (id)artist;
- (id)artwork;
- (id)identifier;
- (unsigned long long)hash;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (id)initWithIntent:;
- (BOOL)isEqual:;
- (void)playWithCompletion:;
- (void)playOnDeviceWithUID:completion:;
- (void)playOnEndpoint:completion:;
@end
