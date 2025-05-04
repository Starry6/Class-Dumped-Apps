@interface AWEIMFansGroupMasterStateAlertInfo : NSObject
@property (nonatomic) NSString tipStr;
@property (nonatomic) NSString cancelStr;
@property (nonatomic) NSString saveStr;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? saveBlock;
- (id)tipStr;
- (id)cancelStr;
- (id)saveStr;
- (void)setTipStr:;
- (void)setCancelStr:;
- (void)setSaveStr:;
- (void)setCancelBlock:;
- (void).cxx_destruct;
- (id)cancelBlock;
- (id)saveBlock;
- (void)setSaveBlock:;
@end
