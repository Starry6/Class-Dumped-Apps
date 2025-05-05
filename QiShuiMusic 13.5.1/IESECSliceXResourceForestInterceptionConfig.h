@interface IESECSliceXResourceForestInterceptionConfig : NSObject
@property (nonatomic) NSArray defaultFetcherSequence;
@property (nonatomic) NSDictionary fileSpecificFetcherSequence;
- (id)defaultFetcherSequence;
- (id)fileSpecificFetcherSequence;
- (id)initWithDefaultFetcherSequence:fileSpecificFetcherSequence:;
- (void).cxx_destruct;
@end
