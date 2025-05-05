@interface IESSaaSTIMOUserProfile : NSObject
@property (nonatomic) NSString userNickName;
@property (nonatomic) NSString userPortrait;
@property (nonatomic) NSString basicExtInfo;
@property (nonatomic) NSString detailExtInfo;
- (id)basicExtInfo;
- (id)detailExtInfo;
- (void)setBasicExtInfo:;
- (void)setDetailExtInfo:;
- (void)setUserNickName:;
- (void)setUserPortrait:;
- (id)userNickName;
- (id)userPortrait;
- (void).cxx_destruct;
@end
