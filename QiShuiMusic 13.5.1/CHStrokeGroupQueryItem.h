@interface CHStrokeGroupQueryItem : NSObject
@property (nonatomic) NSDictionary _tokenizedTextResultsByLocale;
@property (nonatomic) NSDictionary _errorsByLocale;
@property (nonatomic) NSNumber strokeGroupIdentifier;
@property (nonatomic) NSNumber strokeGroupStableIdentifier;
@property (nonatomic) NSArray strokeIdentifiers;
@property (nonatomic) q strokeGroupType;
@property (nonatomic) NSLocale preferredLocale;
- (void).cxx_destruct;
- (id)description;
- (id)preferredLocale;
- (long long)strokeGroupType;
- (id)strokeIdentifiers;
- (id)initWithStrokeGroupIdentifier:stableIdentifier:strokeIdentifiers:type:preferredLocale:tokenizedTextResultsByLocale:errorsByLocale:;
- (id)textRecognitionResultForLocale:error:;
- (id)strokeGroupIdentifier;
- (id)strokeGroupStableIdentifier;
- (id)_tokenizedTextResultsByLocale;
- (id)_errorsByLocale;
+ (id)descriptionForStrokeGroupQueryItemType:;
@end
