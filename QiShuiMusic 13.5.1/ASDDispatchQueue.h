@interface ASDDispatchQueue : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)scheduleBlock:;
- (id)initWithName:;
- (void)syncUsingBlock:;
- (void)assertQueue;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)asyncUsingBlock:;
+ (id)defaultQueue;
@end
