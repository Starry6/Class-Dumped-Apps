@interface AWEIMStrangerShareListDataManager : NSObject
@property (nonatomic) BOOL isRequstOnAir;
@property (nonatomic) NSArray users;
- (BOOL)isRequstOnAir;
- (void)setIsRequstOnAir:;
- (void)fetchStrangerShareList:;
- (id)users;
- (void).cxx_destruct;
- (void)setUsers:;
+ (id)sharedInstance;
@end
