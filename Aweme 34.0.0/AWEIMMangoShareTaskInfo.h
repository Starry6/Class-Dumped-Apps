@interface AWEIMMangoShareTaskInfo : NSObject
@property (nonatomic) NSString taskID;
@property (nonatomic) NSString token;
@property (nonatomic) NSString group;
- (id)initWithTaskID:token:group:;
- (id)group;
- (id)description;
- (void).cxx_destruct;
- (id)token;
- (id)taskID;
- (id)initWithDictionary:;
- (id)jsonString;
@end
