@interface RTIInputSystemDataPayload : RTIDataPayload
@property (nonatomic) RTIDocumentTraits documentTraits;
@property (nonatomic) RTIDocumentState documentState;
@property (nonatomic) RTITextOperations textOperations;
@property (nonatomic) NSUUID sessionUUID;
- (void)setDocumentState:;
- (id)documentState;
- (id)data;
- (id)sessionUUID;
- (id)initWithCoder:;
- (void)setSessionUUID:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)textOperations;
- (void)setTextOperations:;
- (id)documentTraits;
- (void)updateData;
- (void)_unarchiveData;
- (void)setDocumentTraits:;
+ (BOOL)supportsSecureCoding;
+ (id)payloadWithData:;
+ (id)payloadWithData:version:;
@end
