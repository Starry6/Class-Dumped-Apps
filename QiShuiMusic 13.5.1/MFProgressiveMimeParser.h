@interface MFProgressiveMimeParser : NSObject
- (id)context;
- (void)start;
- (id)data;
- (void)setDelegate:;
- (void)_reportError:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)topLevelPart;
- (id)initWithBodyData:topLevelHeaders:headersToPreserve:;
- (void)noteDataLengthChanged:;
- (id)currentPart;
- (void)_initializeTopLevelPartWithHeaders:;
- (void)_continueParsingStartOfPart;
- (void)_continueParsingHeaders;
- (id)_currentBoundary;
- (void)_continueParsingBody;
- (void)_continueParsing;
@end
