@interface PSISynonymRecord : NSObject
@property (nonatomic) NSString synonym;
@property (nonatomic) s category;
@property (nonatomic) NSString identifier;
- (id)identifier;
- (void)setCategory:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (short)category;
- (id)synonym;
- (void)setSynonym:;
- (id)initWithSynonym:category:identifier:;
@end
