@interface AAAbsintheSignerContextCache : NSObject
@property (nonatomic) NSDate creationDate;
@property (nonatomic) AAAbsintheContext context;
- (id)init;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)creationDate;
+ (id)cacheWithContext:;
@end
