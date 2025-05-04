@interface AWELifeFeedsEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray actionsList;
- (void)setActionsList:;
- (id)actionsList;
- (void).cxx_destruct;
- (id)actionWithType:;
- (void)setName:;
- (id)name;
- (id)copyEvent;
+ (id)createEventInstanceWithData:;
@end
