@interface CHTitleQuery : CHQuery
@property (nonatomic) NSString transcribedTitle;
@property (nonatomic) NSSet titleStrokeIdentifiers;
- (id)debugName;
- (void).cxx_destruct;
- (id)transcribedTitle;
- (id)titleStrokeIdentifiers;
- (id)initWithRecognitionSession:;
- (void)q_updateQueryResult;
- (void)_setTranscribedTitle:strokeIdentifiers:;
@end
