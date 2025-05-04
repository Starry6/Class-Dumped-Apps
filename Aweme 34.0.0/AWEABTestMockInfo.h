@interface AWEABTestMockInfo : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString owner;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString bizLine;
@property (nonatomic) NSString bizModule;
@property (nonatomic) AWESettingsMockEnumArray enums;
- (id)bizLine;
- (void)setBizLine:;
- (void)setEnums:;
- (id)bizModule;
- (void)setBizModule:;
- (void)setOwner:;
- (id)appVersion;
- (void)setAppVersion:;
- (void)setDesc:;
- (id)desc;
- (id)owner;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)enums;
@end
