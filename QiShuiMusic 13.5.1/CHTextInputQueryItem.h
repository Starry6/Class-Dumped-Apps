@interface CHTextInputQueryItem : NSObject
@property (nonatomic) NSNumber itemIdentifier;
@property (nonatomic) NSNumber itemStableIdentifier;
@property (nonatomic) NSArray strokeIdentifiers;
@property (nonatomic) CHTextCorrectionResult correctionResult;
- (id)itemIdentifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)itemStableIdentifier;
- (id)correctionResult;
- (id)strokeIdentifiers;
- (id)initWithIdentifier:stableIdentifier:strokeIdentifiers:correctionResult:;
- (BOOL)isEqualToTextInputQueryItem:;
@end
