@interface AWEIMStrangerShareListDataManager : NSObject
@property (nonatomic) BOOL isRequstOnAir;
@property (nonatomic) NSArray users;
- (void)fetchStrangerShareList:;
- (BOOL)isRequstOnAir;
- (void)setIsRequstOnAir:;
- (id)users;
- (void).cxx_destruct;
- (void)setUsers:;
+ (id)sharedInstance;
@end
