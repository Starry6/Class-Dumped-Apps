@interface PBDataTransferRequest : NSObject
@property (nonatomic) PBItemCollection itemCollection;
@property (nonatomic) PBItem item;
@property (nonatomic) PBItemRepresentation repr;
@property (nonatomic) NSProgress progress;
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)item;
- (void)setProgress:;
- (id)progress;
- (id)typeIdentifier;
- (void)setItem:;
- (void).cxx_destruct;
- (id)itemCollection;
- (void)setItemCollection:;
- (id)repr;
- (void)setRepr:;
@end
