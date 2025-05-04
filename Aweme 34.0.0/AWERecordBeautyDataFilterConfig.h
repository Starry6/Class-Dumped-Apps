@interface AWERecordBeautyDataFilterConfig : NSObject
@property (nonatomic) Q filterIgnoreOption;
@property (nonatomic) NSString region;
@property (nonatomic) q abGroup;
@property (nonatomic) q gender;
@property (nonatomic) BOOL shouldUseComposerParams;
- (BOOL)shouldUseComposerParams;
- (void)setShouldUseComposerParams:;
- (void)setFilterIgnoreOption:;
- (unsigned long long)filterIgnoreOption;
- (long long)abGroup;
- (id)init;
- (void)setRegion:;
- (id)region;
- (void)setGender:;
- (long long)gender;
- (void).cxx_destruct;
- (void)setAbGroup:;
@end
