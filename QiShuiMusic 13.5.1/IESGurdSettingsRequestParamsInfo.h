@interface IESGurdSettingsRequestParamsInfo : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSArray groupNamesArray;
@property (nonatomic) NSArray channelsArray;
- (id)groupNamesArray;
- (id)channelsArray;
- (void)setChannelsArray:;
- (void)setGroupNamesArray:;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)infoWithDictionary:;
@end
