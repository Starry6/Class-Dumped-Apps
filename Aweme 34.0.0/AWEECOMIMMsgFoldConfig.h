@interface AWEECOMIMMsgFoldConfig : NSObject
@property (nonatomic) AWEECOMIMAllFoldGroupConfig allFoldGroupConfig;
- (void)setAllFoldGroupConfig:;
- (id)allFoldGroupConfig;
- (void).cxx_destruct;
- (id)initWithDictionary:;
+ (id)fallbackMsgFoldConfig;
@end
