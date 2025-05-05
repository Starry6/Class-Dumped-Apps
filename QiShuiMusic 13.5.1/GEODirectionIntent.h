@interface GEODirectionIntent : NSObject
@property (nonatomic) GEOResolvedItem origin;
@property (nonatomic) GEOResolvedItem destination;
@property (nonatomic) NSInteger transportType;
- (int)transportType;
- (id)destination;
- (id)origin;
- (void).cxx_destruct;
- (id)initWithDirectionIntent:;
@end
