@interface PHLocalIdentifierMapping : NSObject
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) NSError error;
- (id)localIdentifier;
- (id)error;
- (void).cxx_destruct;
- (id)initWithLocalIdentifier:error:;
@end
