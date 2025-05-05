@interface PLPhotoAnalysisPersonSuggestion : NSObject
@property (nonatomic) q keyFaceClusterSequenceNumber;
@property (nonatomic) NSString keyFaceLocalIdentifier;
@property (nonatomic) NSString personLocalIdentifier;
@property (nonatomic) q personFaceCount;
@property (nonatomic) BOOL confirmed;
- (BOOL)confirmed;
- (void).cxx_destruct;
- (id)description;
- (id)keyFaceLocalIdentifier;
- (id)initWithSuggestionDictionary:;
- (id)personLocalIdentifier;
- (id)suggestionDictionaryRepresentation;
- (long long)keyFaceClusterSequenceNumber;
- (long long)personFaceCount;
@end
