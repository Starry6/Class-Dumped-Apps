@interface IESLiveState : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) @? willEnteBlock;
@property (nonatomic) @? didEnterBlock;
@property (nonatomic) @? willLeaveBlock;
@property (nonatomic) @? didLeaveBlock;
- (id)didLeaveBlock;
- (void)setDidLeaveBlock:;
- (void)setWillEnteBlock:;
- (void)setWillLeaveBlock:;
- (id)willEnteBlock;
- (id)willLeaveBlock;
- (id)init;
- (void)setName:;
- (id)userInfo;
- (id)initWithName:userInfo:;
- (unsigned long long)hash;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)didEnterBlock;
- (void)setDidEnterBlock:;
+ (id)stateWithName:userInfo:;
+ (id)stateWithName:;
@end
