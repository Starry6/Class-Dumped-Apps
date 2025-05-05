@interface ICSConference : ICSProperty
@property (nonatomic) NSString feature;
@property (nonatomic) NSString info;
@property (nonatomic) NSString language;
@property (nonatomic) NSString region;
- (void)setFeature:;
- (id)feature;
- (void)setRegion:;
- (void)setLanguage:;
- (id)language;
- (void)setInfo:;
- (id)region;
- (void)_ICSStringWithOptions:appendingToString:;
- (id)info;
- (id)initWithValue:type:;
- (unsigned long long)currentHash;
- (BOOL)isEqualToConference:;
@end
