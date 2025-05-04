@interface AWEAwemeDiggListManager : NSObject
@property (nonatomic) NSMutableArray diggListArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataControllerWithAwemeID:;
- (void)removeAllData;
- (id)diggListArray;
- (void)setDiggListArray:;
- (void)updateDiggListArray:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
