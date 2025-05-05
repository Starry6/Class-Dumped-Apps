@interface IESECOpenProductUpdateMessage : IESECOpenMessage
@property (nonatomic) NSArray updatedProductIDs;
- (void)setUpdatedProductIDs:;
- (id)stringArrayFromPBIntArray:;
- (id)updatedProductIDs;
- (void)setRawMessage:;
- (void).cxx_destruct;
@end
