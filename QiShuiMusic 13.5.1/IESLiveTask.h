@interface IESLiveTask : NSObject
@property (nonatomic) @? block;
@property (nonatomic) Q priority;
@property (nonatomic) double time;
@property (nonatomic) NSString name;
@property (nonatomic) NSString identifier;
- (id)initWithName:identifier:block:priority:;
- (id)block;
- (double)time;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (unsigned long long)priority;
@end
