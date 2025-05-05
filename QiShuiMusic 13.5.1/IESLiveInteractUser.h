@interface IESLiveInteractUser : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString account;
@property (nonatomic) NSString strUID;
- (id)initWitAccount:strUID:;
- (void)setStrUID:;
- (id)strUID;
- (id)account;
- (void)setAccount:;
- (void)setName:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
@end
