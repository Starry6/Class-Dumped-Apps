@interface AWEIMFansGroupMasterStateAlertInfo : NSObject
@property (nonatomic) NSString tipStr;
@property (nonatomic) NSString cancelStr;
@property (nonatomic) NSString saveStr;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? saveBlock;
- (id)saveStr;
- (id)cancelStr;
- (void)setCancelStr:;
- (void)setSaveStr:;
- (void)setTipStr:;
- (id)tipStr;
- (void)setCancelBlock:;
- (id)cancelBlock;
- (void).cxx_destruct;
- (id)saveBlock;
- (void)setSaveBlock:;
@end
