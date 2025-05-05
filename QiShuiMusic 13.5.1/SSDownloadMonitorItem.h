@interface SSDownloadMonitorItem : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) q itemState;
@property (nonatomic) NSString representativeTitle;
@property (nonatomic) NSString statusString;
@property (nonatomic) q totalNumberOfItems;
@property (nonatomic) Q transferTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (void)setStatusString:;
- (id)statusString;
- (void)setItemState:;
- (void)setClientIdentifier:;
- (id)clientIdentifier;
- (long long)itemState;
- (id)representativeTitle;
- (void)setRepresentativeTitle:;
- (long long)totalNumberOfItems;
- (void)setTotalNumberOfItems:;
- (unsigned long long)transferTypes;
- (void)setTransferTypes:;
@end
