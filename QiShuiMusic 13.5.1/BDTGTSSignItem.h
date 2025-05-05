@interface BDTGTSSignItem : NSObject
@property (nonatomic) NSString ticket;
@property (nonatomic) NSString tsSign;
- (void)setTsSign:;
- (id)tsSign;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
+ (id)adapterTsSignFromParams:;
@end
