@interface MCSignpost : NSObject
@property (nonatomic) NSString process;
@property (nonatomic) Q type;
@property (nonatomic) NSString feature;
@property (nonatomic) NSDate timestamp;
- (id)feature;
- (unsigned long long)type;
- (id)process;
- (void).cxx_destruct;
- (id)timestamp;
- (id)copyWithZone:;
- (id)initWithProcess:type:feature:timestamp:;
@end
