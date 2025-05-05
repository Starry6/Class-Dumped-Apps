@interface PKIndexableContent : NSObject
@property (nonatomic) CHRecognitionSessionIndexableContent chIndexableContent;
@property (nonatomic) NSString indexableTextRepresentation;
@property (nonatomic) NSString presentableTextRepresentation;
- (void).cxx_destruct;
- (id)indexableTextRepresentation;
- (id)presentableTextRepresentation;
- (id)initWithIndexableContent:;
- (id)chIndexableContent;
- (void)setChIndexableContent:;
@end
