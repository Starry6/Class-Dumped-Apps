@interface PFUBLogEventID : NSObject
@property (nonatomic) q hash;
- (long long)hash;
- (id)initWithEventType:;
- (id)initWithCustomKey:;
@end
