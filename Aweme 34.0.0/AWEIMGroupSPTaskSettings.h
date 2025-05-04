@interface AWEIMGroupSPTaskSettings : NSObject
@property (nonatomic) NSArray interceptNoTaskTypes;
@property (nonatomic) NSArray interceptOfflineTaskTypes;
@property (nonatomic) NSString interceptTip;
- (id)interceptNoTaskTypes;
- (id)interceptOfflineTaskTypes;
- (id)interceptTip;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
