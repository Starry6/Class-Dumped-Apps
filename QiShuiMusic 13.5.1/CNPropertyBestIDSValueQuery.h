@interface CNPropertyBestIDSValueQuery : NSObject
@property (nonatomic) NSArray propertyItems;
@property (nonatomic) NSArray idsHandles;
@property (nonatomic) <CNCancelable> idsLookupToken;
@property (nonatomic) NSMutableArray validIDSHandles;
@property (nonatomic) NSMutableArray validIDSItems;
@property (nonatomic) CNPropertyGroupItem bestIDSProperty;
@property (nonatomic) <CNPropertyBestIDSValueQueryDelegate> delegate;
- (void)cancel;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)propertyItems;
- (void)setPropertyItems:;
- (id)initWithPropertyItems:service:;
- (id)initWithPropertyItems:service:idsAvailabilityProvider:schedulerProvider:;
- (id)bestIDSProperty;
- (id)validIDSItems;
- (id)idsHandles;
- (void)setIdsHandles:;
- (id)idsLookupToken;
- (void)setIdsLookupToken:;
- (id)validIDSHandles;
- (void)setValidIDSHandles:;
@end
